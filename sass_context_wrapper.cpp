#include "sass_context_wrapper.h"
#include <cstdlib>

extern "C" {
  using namespace std;

  sass_context_wrapper* sass_new_context_wrapper()
  {
    return (sass_context_wrapper*) calloc(1, sizeof(sass_context_wrapper));
  }

  void sass_free_context_wrapper(sass_context_wrapper* ctx_w)
  {
    if (ctx_w->ctx) sass_free_context(ctx_w->ctx);

    free(ctx_w);
  }
}

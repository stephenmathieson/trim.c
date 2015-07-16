
#include <stdio.h>
#include <string.h>
#include "trim.h"
#include "describe/describe.h"

describe("trim_left", {
  it("should handle empty strings", {
    char str[] = "";
    assert_str_equal("", trim_left(str));
  });

  it("should remove leading whitespace", {
    char str[] = "\t\n hello";
    assert_str_equal("hello", trim_left(str));
    assert_str_equal("hello", str);
  });

  it("should not remove trailing whitespace", {
    char str[] = "hello \t\n";
    assert_str_equal("hello \t\n", trim_left(str));
    assert_str_equal("hello \t\n", str);
  });
});


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "trim.h"
#include "describe.h"

int main() {
  describe("trim left", {
    it("should remove leading whitespace", {
      char str[] = "\t\n hello";
      assert_str_equal("hello", trim_left(str));
      assert_str_equal("hello", str);
    });
    it("should not remove trailing whitespace", {
      char str[] = "hello  ";
      assert_str_equal("hello  ", trim_left(str));
      assert_str_equal("hello  ", str);
    });
  });

  describe("trim right", {
    it("should remove trailing whitespace", {
      char str[] = "hello \t\n";
      assert_str_equal("hello", trim_right(str));
      assert_str_equal("hello", str);
    });
    it("should not remove leading whitespace", {
      char str[] = "  hello";
      assert_str_equal("  hello", trim_right(str));
      assert_str_equal("  hello", str);
    });
  });

  describe("trim", {
    it("should remove leading and trailing whitespace", {
      char str[] = " \n\t hello \n\t ";
      assert_str_equal("hello", trim(str));
      assert_str_equal("hello", str);
    });
  });

  return assert_failures();
}

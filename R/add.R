#' Add 1 to a single numeric
#'
#' `add_one()` adds 1 to a single numeric value.
#'
#' @param a A single numeric value.
#'
#' @examples
#'
#' add_one(2)
#'
#' @export
add_one <- function(a) {

  ok <- is.numeric(a) & length(a) == 1L

  if (!ok) {
    stop("`a` must be a single numeric value.", call. = FALSE)
  }

  .Call(addr_add_one, a)
}

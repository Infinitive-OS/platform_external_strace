/* Generated by ./xlat/gen.sh from ./xlat/sigaltstack_flags.in; do not edit. */

static const struct xlat sigaltstack_flags[] = {
#if !(defined(SS_ONSTACK) || (defined(HAVE_DECL_SS_ONSTACK) && HAVE_DECL_SS_ONSTACK))
# define SS_ONSTACK 1
#endif
 XLAT(SS_ONSTACK),
#if !(defined(SS_DISABLE) || (defined(HAVE_DECL_SS_DISABLE) && HAVE_DECL_SS_DISABLE))
# define SS_DISABLE 2
#endif
 XLAT(SS_DISABLE),
 XLAT_END
};

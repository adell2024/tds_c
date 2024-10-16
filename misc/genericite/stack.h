#ifndef STACK_H
#define STACK_H

#define STACK_IMPLEMENTATION(type, size) \
    {                                    \
        type base[size];                 \
        type *next;                      \
    }

#define STACK_DECLARE(type, ident, size) \
    struct STACK_IMPLEMENTATION(type, size) ident

#define STACK_DEFTYPE(type, ident, size)           \
    struct ident STACK_IMPLEMENTATION(type, size); \
    typedef struct ident ident

#define STACK_SIZE(ident) \
    (sizeof((ident).base) / sizeof((ident).base[0]))

#define STACK_LIMIT(ident) \
    ((ident).base + STACK_SIZE((ident)))

#define STACK_INIT(ident) \
    (ident).next = ((ident).base)

#define PUSH(ident, e) (*(ident).next++ = (e))
#define POP(ident) (*--(ident).next)

#define STACK_EMPTY(ident) \
    ((ident).next == (ident).base)
#define STACK_FULL(ident) \
    ((ident).next >= STACK_LIMIT(ident))

#define STACK_TOP(ident) (*((ident).next - 1))

#endif /* STACK_H */

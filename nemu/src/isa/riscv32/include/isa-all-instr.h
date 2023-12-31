#include <cpu/decode.h>
#include "../local-include/rtl.h"

#define INSTR_LIST(f) f(lui) f(lw) f(sw) f(addi) f(auipc) f(jal) f(jalr) f(add) f(sltu) f(xor) \
                      f(or) f(sltiu) f(bne) f(beq) f(sub) f(sb) f(xori) f(lbu) f(andi) f(srai) \
                      f(sll) f(and) f(bge) f(mul) f(div) f(rem) f(blt) f(slt) f(lh) f(lhu) f(slli)\
                      f(srli) f(sh) f(mulh) f(sra) f(srl) f(bltu) f(ori) f(divu) f(remu) f(bgeu) f(lb)\
                      f(mulhu) f(slti) f(csrrw) f(csrrs) f(ecall) f(mret) f(inv) f(nemu_trap)

def_all_EXEC_ID();

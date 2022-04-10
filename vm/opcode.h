#pragma once

#include "lib.h"

enum {
  VM_OPCODE_EXIT = 0,
  VM_OPCODE_REG = 1,
  VM_OPCODE_INT = 2,
  VM_OPCODE_JUMP = 3,
  VM_OPCODE_FUNC = 4,
  VM_OPCODE_ADD = 5,
  VM_OPCODE_SUB = 6,
  VM_OPCODE_MUL = 7,
  VM_OPCODE_DIV = 8,
  VM_OPCODE_MOD = 9,
  VM_OPCODE_CALL = 10,
  VM_OPCODE_RET = 11,
  VM_OPCODE_PUTCHAR = 12,
  VM_OPCODE_BB = 13,
  VM_OPCODE_BEQ = 14,
  VM_OPCODE_BLT = 15,
  VM_OPCODE_DCALL = 16,
  VM_OPCODE_INTF = 17,
  VM_OPCODE_TCALL = 18,
};

typedef uint32_t vm_opcode_t;

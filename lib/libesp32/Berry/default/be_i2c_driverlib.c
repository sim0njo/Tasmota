/********************************************************************
 * Tasmota I2C_Driver class
 * 
 * To use: `d = I2C_Driver(addr, name)`
 * where:
 *      addr: I2C address of the device
 *      name: name of the I2C chip for logging
 * 
 *******************************************************************/
#include "be_constobj.h"

/********************************************************************
** Solidified function: read32
********************************************************************/
be_local_closure(I2C_Driver_read32,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(0),
    /* K4   */  be_const_int(1),
    /* K5   */  be_const_int(2),
    /* K6   */  be_const_int(3),
    }),
    &be_const_str_read32,
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x541A0003,  //  0004  LDINT	R6	4
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0503,  //  0006  GETIDX	R3	R2	K3
      0x54120017,  //  0007  LDINT	R4	24
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100504,  //  0009  GETIDX	R4	R2	K4
      0x5416000F,  //  000A  LDINT	R5	16
      0x38100805,  //  000B  SHL	R4	R4	R5
      0x000C0604,  //  000C  ADD	R3	R3	R4
      0x94100505,  //  000D  GETIDX	R4	R2	K5
      0x54160007,  //  000E  LDINT	R5	8
      0x38100805,  //  000F  SHL	R4	R4	R5
      0x000C0604,  //  0010  ADD	R3	R3	R4
      0x94100506,  //  0011  GETIDX	R4	R2	K6
      0x000C0604,  //  0012  ADD	R3	R3	R4
      0x80040600,  //  0013  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write8
********************************************************************/
be_local_closure(I2C_Driver_write8,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(write),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(1),
    }),
    &be_const_str_write8,
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x880C0100,  //  0000  GETMBR	R3	R0	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x88140102,  //  0002  GETMBR	R5	R0	K2
      0x5C180200,  //  0003  MOVE	R6	R1
      0x5C1C0400,  //  0004  MOVE	R7	R2
      0x58200003,  //  0005  LDCONST	R8	K3
      0x7C0C0A00,  //  0006  CALL	R3	5
      0x80040600,  //  0007  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read12
********************************************************************/
be_local_closure(I2C_Driver_read12,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read12,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120003,  //  0007  LDINT	R4	4
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_bit
********************************************************************/
be_local_closure(I2C_Driver_write_bit,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    4,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str(write8),
    /* K3   */  be_nested_str(read8),
    }),
    &be_const_str_write_bit,
    &be_const_str_solidified,
    ( &(const binstruction[26]) {  /* code */
      0x14100500,  //  0000  LT	R4	R2	K0
      0x74120002,  //  0001  JMPT	R4	#0005
      0x54120006,  //  0002  LDINT	R4	7
      0x24100404,  //  0003  GT	R4	R2	R4
      0x78120000,  //  0004  JMPF	R4	#0006
      0x80000800,  //  0005  RET	0
      0x38120202,  //  0006  SHL	R4	K1	R2
      0x780E0007,  //  0007  JMPF	R3	#0010
      0x8C140102,  //  0008  GETMET	R5	R0	K2
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x8C200103,  //  000A  GETMET	R8	R0	K3
      0x5C280200,  //  000B  MOVE	R10	R1
      0x7C200400,  //  000C  CALL	R8	2
      0x30201004,  //  000D  OR	R8	R8	R4
      0x7C140600,  //  000E  CALL	R5	3
      0x70020008,  //  000F  JMP		#0019
      0x8C140102,  //  0010  GETMET	R5	R0	K2
      0x5C1C0200,  //  0011  MOVE	R7	R1
      0x8C200103,  //  0012  GETMET	R8	R0	K3
      0x5C280200,  //  0013  MOVE	R10	R1
      0x7C200400,  //  0014  CALL	R8	2
      0x542600FE,  //  0015  LDINT	R9	255
      0x04241204,  //  0016  SUB	R9	R9	R4
      0x2C201009,  //  0017  AND	R8	R8	R9
      0x7C140600,  //  0018  CALL	R5	3
      0x80000000,  //  0019  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read24
********************************************************************/
be_local_closure(I2C_Driver_read24,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(3),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    /* K6   */  be_const_int(2),
    }),
    &be_const_str_read24,
    &be_const_str_solidified,
    ( &(const binstruction[16]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x5412000F,  //  0007  LDINT	R4	16
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x54160007,  //  000A  LDINT	R5	8
      0x38100805,  //  000B  SHL	R4	R4	R5
      0x000C0604,  //  000C  ADD	R3	R3	R4
      0x94100506,  //  000D  GETIDX	R4	R2	K6
      0x000C0604,  //  000E  ADD	R3	R3	R4
      0x80040600,  //  000F  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read8
********************************************************************/
be_local_closure(I2C_Driver_read8,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(1),
    }),
    &be_const_str_read8,
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x80040400,  //  0006  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(I2C_Driver_init,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    4,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str(get_tasmota),
    /* K1   */  be_nested_str(i2c_enabled),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_nested_str(wire),
    /* K4   */  be_nested_str(wire_scan),
    /* K5   */  be_nested_str(function),
    /* K6   */  be_nested_str(name),
    /* K7   */  be_nested_str(I2C_X3A),
    /* K8   */  be_nested_str(detected_X20on_X20bus),
    /* K9   */  be_nested_str(bus),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[44]) {  /* code */
      0x8C100100,  //  0000  GETMET	R4	R0	K0
      0x7C100200,  //  0001  CALL	R4	1
      0x4C140000,  //  0002  LDNIL	R5
      0x20140605,  //  0003  NE	R5	R3	R5
      0x78160004,  //  0004  JMPF	R5	#000A
      0x8C140901,  //  0005  GETMET	R5	R4	K1
      0x5C1C0600,  //  0006  MOVE	R7	R3
      0x7C140400,  //  0007  CALL	R5	2
      0x74160000,  //  0008  JMPT	R5	#000A
      0x80000A00,  //  0009  RET	0
      0x90020402,  //  000A  SETMBR	R0	K2	R2
      0x8C140904,  //  000B  GETMET	R5	R4	K4
      0x881C0102,  //  000C  GETMBR	R7	R0	K2
      0x7C140400,  //  000D  CALL	R5	2
      0x90020605,  //  000E  SETMBR	R0	K3	R5
      0x88140103,  //  000F  GETMBR	R5	R0	K3
      0x78160019,  //  0010  JMPF	R5	#002B
      0x60140004,  //  0011  GETGBL	R5	G4
      0x5C180200,  //  0012  MOVE	R6	R1
      0x7C140200,  //  0013  CALL	R5	1
      0x1C140B05,  //  0014  EQ	R5	R5	K5
      0x78160004,  //  0015  JMPF	R5	#001B
      0x5C140200,  //  0016  MOVE	R5	R1
      0x5C180000,  //  0017  MOVE	R6	R0
      0x7C140200,  //  0018  CALL	R5	1
      0x90020C05,  //  0019  SETMBR	R0	K6	R5
      0x70020000,  //  001A  JMP		#001C
      0x90020C01,  //  001B  SETMBR	R0	K6	R1
      0x88140106,  //  001C  GETMBR	R5	R0	K6
      0x4C180000,  //  001D  LDNIL	R6
      0x1C140A06,  //  001E  EQ	R5	R5	R6
      0x78160001,  //  001F  JMPF	R5	#0022
      0x4C140000,  //  0020  LDNIL	R5
      0x90020605,  //  0021  SETMBR	R0	K3	R5
      0x88140103,  //  0022  GETMBR	R5	R0	K3
      0x78160006,  //  0023  JMPF	R5	#002B
      0x60140001,  //  0024  GETGBL	R5	G1
      0x58180007,  //  0025  LDCONST	R6	K7
      0x881C0106,  //  0026  GETMBR	R7	R0	K6
      0x58200008,  //  0027  LDCONST	R8	K8
      0x88240103,  //  0028  GETMBR	R9	R0	K3
      0x88241309,  //  0029  GETMBR	R9	R9	K9
      0x7C140800,  //  002A  CALL	R5	4
      0x80000000,  //  002B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read13
********************************************************************/
be_local_closure(I2C_Driver_read13,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(wire),
    /* K1   */  be_nested_str(read_bytes),
    /* K2   */  be_nested_str(addr),
    /* K3   */  be_const_int(2),
    /* K4   */  be_const_int(0),
    /* K5   */  be_const_int(1),
    }),
    &be_const_str_read13,
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180003,  //  0004  LDCONST	R6	K3
      0x7C080800,  //  0005  CALL	R2	4
      0x940C0504,  //  0006  GETIDX	R3	R2	K4
      0x54120004,  //  0007  LDINT	R4	5
      0x380C0604,  //  0008  SHL	R3	R3	R4
      0x94100505,  //  0009  GETIDX	R4	R2	K5
      0x000C0604,  //  000A  ADD	R3	R3	R4
      0x80040600,  //  000B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: I2C_Driver
********************************************************************/
be_local_class(I2C_Driver,
    3,
    NULL,
    be_nested_map(11,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(read32, -1), be_const_closure(I2C_Driver_read32_closure) },
        { be_const_key(write8, 6), be_const_closure(I2C_Driver_write8_closure) },
        { be_const_key(name, -1), be_const_var(2) },
        { be_const_key(addr, 8), be_const_var(1) },
        { be_const_key(read12, -1), be_const_closure(I2C_Driver_read12_closure) },
        { be_const_key(wire, 10), be_const_var(0) },
        { be_const_key(read13, -1), be_const_closure(I2C_Driver_read13_closure) },
        { be_const_key(read24, -1), be_const_closure(I2C_Driver_read24_closure) },
        { be_const_key(read8, -1), be_const_closure(I2C_Driver_read8_closure) },
        { be_const_key(init, -1), be_const_closure(I2C_Driver_init_closure) },
        { be_const_key(write_bit, -1), be_const_closure(I2C_Driver_write_bit_closure) },
    })),
    be_str_literal("I2C_Driver")
);
/*******************************************************************/

void be_load_I2C_Driver_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_I2C_Driver);
    be_setglobal(vm, "I2C_Driver");
    be_pop(vm, 1);
}

// automatically generated by the FlatBuffers compiler, do not modify

import * as flatbuffers from 'flatbuffers';

import { StructOfStructs, StructOfStructsT } from '../../my-game/example/struct-of-structs.js';


export class StructOfStructsOfStructs implements flatbuffers.IUnpackableObject<StructOfStructsOfStructsT> {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):StructOfStructsOfStructs {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

a(obj?:StructOfStructs):StructOfStructs|null {
  return (obj || new StructOfStructs()).__init(this.bb_pos, this.bb!);
}

static getFullyQualifiedName():string {
  return 'MyGame_Example_StructOfStructsOfStructs';
}

static sizeOf():number {
  return 20;
}

static createStructOfStructsOfStructs(builder:flatbuffers.Builder, a_a_id: number, a_a_distance: number, a_b_a: number, a_b_b: number, a_c_id: number, a_c_distance: number):flatbuffers.Offset {
  builder.prep(4, 20);
  builder.prep(4, 20);
  builder.prep(4, 8);
  builder.writeInt32(a_c_distance);
  builder.writeInt32(a_c_id);
  builder.prep(2, 4);
  builder.pad(1);
  builder.writeInt8(a_b_b);
  builder.writeInt16(a_b_a);
  builder.prep(4, 8);
  builder.writeInt32(a_a_distance);
  builder.writeInt32(a_a_id);
  return builder.offset();
}


unpack(): StructOfStructsOfStructsT {
  return new StructOfStructsOfStructsT(
    (this.a() !== null ? this.a()!.unpack() : null)
  );
}


unpackTo(_o: StructOfStructsOfStructsT): void {
  _o.a = (this.a() !== null ? this.a()!.unpack() : null);
}
}

export class StructOfStructsOfStructsT implements flatbuffers.IGeneratedObject {
constructor(
  public a: StructOfStructsT|null = null
){}


pack(builder:flatbuffers.Builder): flatbuffers.Offset {
  return StructOfStructsOfStructs.createStructOfStructsOfStructs(builder,
    (this.a?.a?.id ?? 0),
    (this.a?.a?.distance ?? 0),
    (this.a?.b?.a ?? 0),
    (this.a?.b?.b ?? 0),
    (this.a?.c?.id ?? 0),
    (this.a?.c?.distance ?? 0)
  );
}
}

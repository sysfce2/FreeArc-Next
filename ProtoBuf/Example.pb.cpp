// This file will be auto-generated from Example.proto when I grow up
#include <cstdint>
#include <string>
#include <vector>


struct SubMessage
{
    void ProtoBufDecode(ProtoBufDecoder &pb)
    {
    }
};


struct Filter
{
    int64_t     size;
    int32_t     altitude;
    float       weight;
    std::string name = "DEFAULT NAME";
    SubMessage  msg;

    std::vector<uint32_t>    more_ints;
    std::vector<int64_t>     more_sints;
    std::vector<double>      more_floats;
    std::vector<std::string> more_strings;
    std::vector<SubMessage>  more_msgs;

    bool has_size = false;
    bool has_altitude = false;
    bool has_weight = false;
    bool has_name = false;
    bool has_msg = false;

    void ProtoBufDecode(ProtoBufDecoder &pb);
};


void Filter::ProtoBufDecode(ProtoBufDecoder &pb)
{
    int field_num, field_type;

    while( pb.get_next_field( &field_num, &field_type))
    {
        switch(field_num)
        {
            case 1: pb.parse_integral_field        (field_type, &size,     &has_size); break;
            case 2: pb.parse_zigzag_integral_field (field_type, &altitude, &has_altitude); break;
            case 3: pb.parse_fp_field              (field_type, &weight,   &has_weight); break;
            case 4: pb.parse_bytearray_field       (field_type, &name,     &has_name); break;
            case 5: pb.parse_message_field         (field_type, &msg,      &has_msg); break;

            case 11: pb.parse_repeated_integral_field       ( field_type, &more_ints); break;
            case 12: pb.parse_repeated_zigzag_integral_field( field_type, &more_sints); break;
            case 13: pb.parse_repeated_fp_field             ( field_type, &more_floats); break;
            case 14: pb.parse_repeated_bytearray_field      ( field_type, &more_strings); break;
            case 15: pb.parse_repeated_message_field        ( field_type, &more_msgs); break;

            default: pb.skip_field( field_type);
        }
    }

    if(! has_size) {
        throw std::runtime_error("Decoded protobuf has no required field Filter.size");
    }
}

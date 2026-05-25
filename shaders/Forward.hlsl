// Forward rendering shader placeholder.
// This file will be replaced with the first DirectX 11 HLSL shader.

struct VSInput
{
    float3 position : POSITION;
};

struct VSOutput
{
    float4 position : SV_POSITION;
};

VSOutput VSMain(VSInput input)
{
    VSOutput output;
    output.position = float4(input.position, 1.0f);
    return output;
}

float4 PSMain(VSOutput input) : SV_TARGET
{
    return float4(1.0f, 1.0f, 1.0f, 1.0f);
}

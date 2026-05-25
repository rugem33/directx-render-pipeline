# Study Resources

DirectX 렌더링 파이프라인을 직접 구현하기 위한 참고자료 정리 문서입니다.

## 1. Direct3D 11 Core

### Microsoft Learn - Direct3D 11 Graphics Pipeline

Direct3D 11의 파이프라인 단계를 이해하기 위한 가장 기본 자료입니다.

공부할 내용:

- Input Assembler
- Vertex Shader
- Rasterizer
- Pixel Shader
- Output Merger
- Depth / Stencil
- Render Target

권장 목표:

- 파이프라인 그림을 보고 각 단계의 역할을 말할 수 있어야 합니다.
- Vertex Buffer가 어떤 과정을 거쳐 Pixel Shader까지 가는지 설명할 수 있어야 합니다.

### Microsoft Learn - Direct3D 11 Device and Device Context

DirectX 11에서 Device와 DeviceContext의 역할을 이해하기 위한 자료입니다.

공부할 내용:

- ID3D11Device
- ID3D11DeviceContext
- Immediate Context
- Deferred Context
- Resource Creation
- Draw Command Submission

권장 목표:

- Device는 리소스 생성 담당, DeviceContext는 렌더링 명령 제출 담당이라는 구조를 이해합니다.

## 2. HLSL

### Microsoft Learn - High-level Shader Language

HLSL의 기본 문법과 셰이더 스테이지를 이해하기 위한 공식 자료입니다.

공부할 내용:

- Vertex Shader
- Pixel Shader
- Semantic
- Constant Buffer
- Texture Sampling
- Shader Profile

권장 목표:

- POSITION, TEXCOORD, NORMAL, SV_POSITION, SV_TARGET 같은 semantic의 의미를 설명할 수 있어야 합니다.

## 3. DirectX Tool Kit

### Microsoft DirectXTK Wiki

DirectX 11을 이용한 C++ 렌더링 프로젝트에서 자주 필요한 유틸리티와 구조를 참고하기 좋은 자료입니다.

공부할 내용:

- SimpleMath
- SpriteBatch
- Model
- Effects
- Texture Loading
- CommonStates

주의할 점:

- 이 프로젝트의 목표는 직접 구현이므로 DirectXTK를 처음부터 많이 가져다 쓰기보다, 구조와 설계 방식을 참고하는 용도로 보는 것을 권장합니다.

## 4. DirectX Graphics Samples

Microsoft 공식 DirectX 샘플 저장소입니다.

공부할 내용:

- Hello Triangle
- SwapChain
- Command Queue
- Root Signature
- Pipeline State Object
- Descriptor Heap
- Resource Barrier

권장 목표:

- DirectX 12에 들어가기 전, DX11과 DX12의 구조 차이를 비교하면서 읽습니다.

## 5. Direct3D 12 Core

### Microsoft Learn - Direct3D 12 Pipelines and Shaders

DirectX 12의 Pipeline State Object와 명시적 GPU 리소스 관리 구조를 이해하기 위한 자료입니다.

공부할 내용:

- PSO
- Root Signature
- Descriptor Heap
- Descriptor Table
- Command List
- Command Queue
- Resource Barrier

권장 목표:

- DX12는 DX11보다 자동으로 해주던 일이 줄고, 개발자가 직접 상태와 동기화를 관리해야 한다는 점을 이해합니다.

## 6. Debugging and Profiling

### PIX on Windows Documentation

DirectX 프로젝트를 분석하기 위한 Microsoft 공식 GPU 디버깅 도구 문서입니다.

공부할 내용:

- GPU Capture
- Timing Capture
- GPU Memory Usage
- WinPixEventRuntime
- Shader Debug Information

권장 목표:

- Triangle 단계부터 PIX 캡처를 남기고, Draw Call과 Pipeline State를 확인하는 습관을 만듭니다.

## Recommended Study Order

```text
1. C++ / Win32 window basics
2. Direct3D 11 device and swap chain
3. D3D11 graphics pipeline
4. HLSL vertex shader and pixel shader
5. Vertex buffer / index buffer / constant buffer
6. Texture and sampler
7. Camera and matrix math
8. Forward rendering
9. Render target and post processing
10. Shadow mapping
11. Deferred rendering and G-Buffer
12. PIX / RenderDoc frame analysis
13. DirectX 12 Hello Triangle
14. DX12 descriptor heap, root signature, PSO
15. DX12 command list and resource barrier
```

## What to Avoid

- 처음부터 DirectX 12로 모든 기능을 구현하려고 하지 않기
- 튜토리얼 코드를 그대로 복붙하고 끝내기
- 수학과 HLSL을 건너뛰고 API 호출만 외우기
- 디버깅 도구 없이 화면 결과만 보고 추측하기

## Portfolio Documentation Habit

각 기능을 구현할 때마다 다음 내용을 기록합니다.

```text
Feature:
Problem:
Implementation:
Pipeline Stage:
GPU Resources:
Debug View:
Issue / Fix:
Result:
```

이 기록이 쌓이면 단순 코드 저장소가 아니라 렌더링 포트폴리오가 됩니다.

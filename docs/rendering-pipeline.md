# Rendering Pipeline

이 문서는 프로젝트에서 구현할 렌더링 파이프라인의 구조를 설명합니다.

## Phase 1 Pipeline

초기 DirectX 11 렌더러는 다음 순서로 구현합니다.

```text
1. Clear Render Target
2. Update Constant Buffers
3. Shadow Pass
4. Geometry / Forward Pass
5. Lighting
6. Post Processing
7. Debug View
8. Present
```

## Forward Rendering

Forward Rendering은 각 오브젝트를 그릴 때 조명 계산까지 함께 수행하는 방식입니다.

### Responsibilities

- Mesh Draw
- Material Binding
- Texture Binding
- Light Constant Buffer Update
- Vertex Shader / Pixel Shader 실행

## Deferred Rendering

Deferred Rendering은 지오메트리 정보를 먼저 G-Buffer에 저장한 뒤, 이후 Lighting Pass에서 조명을 계산하는 방식입니다.

### Geometry Pass Outputs

```text
GBuffer0: Albedo
GBuffer1: Normal
GBuffer2: World Position or View Position
GBuffer3: Material Properties
Depth: Scene Depth
```

### Lighting Pass Inputs

```text
Albedo Texture
Normal Texture
Position Texture
Material Texture
Depth Texture
Light Data
Camera Data
```

## Shadow Mapping

Shadow Mapping은 조명 시점에서 Depth Map을 먼저 생성하고, 메인 렌더링 단계에서 해당 Depth Map을 참조하여 그림자 여부를 계산합니다.

```text
Light View Projection
  -> Render depth from light
  -> Sample shadow map in lighting shader
```

## Post Processing

Post Processing은 최종 렌더링 결과를 Render Target에 저장한 뒤, 화면 공간에서 후처리하는 단계입니다.

Planned effects:

- Gamma Correction
- Tone Mapping
- Bloom
- Edge Detection Debug Pass

## Debug Views

포트폴리오에서 설명력을 높이기 위해 다음 디버그 뷰를 제공합니다.

- Final Color
- Depth Buffer
- Shadow Map
- G-Buffer Albedo
- G-Buffer Normal
- G-Buffer Position
- Lighting Only
- Bloom Texture

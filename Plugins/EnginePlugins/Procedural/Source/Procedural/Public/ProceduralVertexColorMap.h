#pragma once
#include "CoreMinimal.h"
#include "EProceduralTextureColorChannel.h"
#include "ProceduralFloatDataMap.h"
#include "ProceduralVertexColorMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralVertexColorMap : public UProceduralFloatDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralTextureColorChannel Channel;
    
    UProceduralVertexColorMap();
};


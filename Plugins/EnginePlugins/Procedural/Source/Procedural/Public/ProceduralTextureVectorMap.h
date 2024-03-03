#pragma once
#include "CoreMinimal.h"
#include "ProceduralTextureSource.h"
#include "ProceduralVectorDataMap.h"
#include "ProceduralTextureVectorMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralTextureVectorMap : public UProceduralVectorDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralTextureSource Source;
    
    UProceduralTextureVectorMap();
};


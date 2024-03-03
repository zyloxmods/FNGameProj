#pragma once
#include "CoreMinimal.h"
#include "EProceduralTextureColorChannel.h"
#include "ProceduralFloatDataMap.h"
#include "ProceduralTextureSource.h"
#include "ProceduralTextureFloatMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralTextureFloatMap : public UProceduralFloatDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralTextureColorChannel Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralTextureSource Source;
    
    UProceduralTextureFloatMap();
};


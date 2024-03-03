#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ProceduralGenerationBlockingVolume.generated.h"

class AProceduralGenerationVolume;

UCLASS(Blueprintable, MinimalAPI)
class AProceduralGenerationBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AProceduralGenerationVolume*> BlockedVolumes;
    
    AProceduralGenerationBlockingVolume();
};


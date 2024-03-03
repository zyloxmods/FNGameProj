#pragma once
#include "CoreMinimal.h"
#include "FortCurieActiveAmbientAudio.generated.h"

class UAudioComponent;
class UFortCurieComponent;

USTRUCT(BlueprintType)
struct FFortCurieActiveAmbientAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCurieComponent* OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioClusterCount;
    
    FORTNITEGAME_API FFortCurieActiveAmbientAudio();
};


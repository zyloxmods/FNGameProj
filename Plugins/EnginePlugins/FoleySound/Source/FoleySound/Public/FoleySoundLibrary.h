#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FoleySoundLibrary.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class FOLEYSOUND_API UFoleySoundLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USoundBase>> Sounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> LoadedSoundObjects;
    
public:
    UFoleySoundLibrary();
};


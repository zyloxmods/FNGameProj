#pragma once
#include "CoreMinimal.h"
#include "AthenaCarPlayerSlotUnreplicated.generated.h"

class UInputComponent;

USTRUCT(BlueprintType)
struct FAthenaCarPlayerSlotUnreplicated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* Input;
    
    FORTNITEGAME_API FAthenaCarPlayerSlotUnreplicated();
};


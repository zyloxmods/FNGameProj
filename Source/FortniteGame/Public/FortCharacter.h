#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortCharacter : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squad_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 squad_slot_idx;
    
    UFortCharacter();
};


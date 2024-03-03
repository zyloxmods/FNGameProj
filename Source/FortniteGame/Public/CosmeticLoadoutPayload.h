#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "CosmeticLoadoutPayload.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticLoadoutPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortItemType, FString> UCRN_CharacterVarients;
    
    FORTNITEGAME_API FCosmeticLoadoutPayload();
};


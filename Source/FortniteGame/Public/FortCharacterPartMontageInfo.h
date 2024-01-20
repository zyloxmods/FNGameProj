#pragma once
#include "CoreMinimal.h"
#include "EFortCustomPartType.h"
#include "FortCharacterPartMontageInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFortCharacterPartMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomPartType CharacterPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    FORTNITEGAME_API FFortCharacterPartMontageInfo();
};


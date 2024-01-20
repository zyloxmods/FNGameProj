#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterAccessoryData.h"
#include "EFortCustomPartType.h"
#include "CustomCharacterCharmData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UCustomCharacterCharmData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomPartType PartAttachedToOverride;
    
public:
    UCustomCharacterCharmData();
};


#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterAccessoryData.h"
#include "EFortCustomPartType.h"
#include "CustomCharacterCharmData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterCharmData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Charm")
    EFortCustomPartType PartAttachedToOverride;
    
public:
    UCustomCharacterCharmData();
};


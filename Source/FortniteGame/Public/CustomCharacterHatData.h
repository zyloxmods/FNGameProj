#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterAccessoryData.h"
#include "ECustomHatType.h"
#include "CustomCharacterHatData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterHatData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    TEnumAsByte<ECustomHatType> HatType;
    
public:
    UCustomCharacterHatData();
};


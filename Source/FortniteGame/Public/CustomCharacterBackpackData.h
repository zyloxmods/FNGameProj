#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterAccessoryData.h"
#include "CustomCharacterBackpackData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterBackpackData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootSocketName;
    
public:
    UCustomCharacterBackpackData();
};


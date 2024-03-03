#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaAIBotCharacterCustomization.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotCharacterCustomization : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CustomizationLoadout;
    
public:
    UFortAthenaAIBotCharacterCustomization();
};


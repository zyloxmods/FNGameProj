#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaCharacterPartItemDefinition.generated.h"

class UCustomCharacterPart;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAthenaCharacterPartItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterParts;
    
public:
    UAthenaCharacterPartItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCustomCharacterPart*> GetCharacterParts() const;
    
};


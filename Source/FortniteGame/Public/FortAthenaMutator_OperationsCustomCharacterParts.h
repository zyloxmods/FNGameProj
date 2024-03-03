#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_FactionCustomCharacterParts.h"
#include "PartOverrideData.h"
#include "FortAthenaMutator_OperationsCustomCharacterParts.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class AFortAthenaMutator_OperationsCustomCharacterParts : public AFortAthenaMutator_FactionCustomCharacterParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartOverrideData> FactionCustomizations_Alter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartOverrideData> FactionCustomizations_Ego;
    
public:
    AFortAthenaMutator_OperationsCustomCharacterParts();
};


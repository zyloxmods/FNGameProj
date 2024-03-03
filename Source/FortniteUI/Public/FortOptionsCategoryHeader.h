#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortOptionsCategoryHeader.generated.h"

UCLASS(Blueprintable)
class UFortOptionsCategoryHeader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UFortOptionsCategoryHeader();
};


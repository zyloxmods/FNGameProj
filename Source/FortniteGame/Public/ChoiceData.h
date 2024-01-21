#pragma once
#include "CoreMinimal.h"
#include "ChoiceDataEntry.h"
#include "ChoiceData.generated.h"

USTRUCT(BlueprintType)
struct FChoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChoiceDataEntry> Items;
    
    FORTNITEGAME_API FChoiceData();
};


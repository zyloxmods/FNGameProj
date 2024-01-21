#pragma once
#include "CoreMinimal.h"
#include "FortSavedModeLoadout.generated.h"

USTRUCT(BlueprintType)
struct FFortSavedModeLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadoutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedGadgets;
    
    FORTNITEGAME_API FFortSavedModeLoadout();
};


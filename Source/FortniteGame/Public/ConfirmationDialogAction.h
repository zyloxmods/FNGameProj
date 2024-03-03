#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ConfirmationDialogAction.generated.h"

USTRUCT(BlueprintType)
struct FConfirmationDialogAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    FORTNITEGAME_API FConfirmationDialogAction();
};


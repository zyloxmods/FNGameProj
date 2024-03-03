#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "FortUIStyleWindowButtons.generated.h"

USTRUCT(BlueprintType)
struct FFortUIStyleWindowButtons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Minimize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Maximize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Restore;
    
    FORTNITEUI_API FFortUIStyleWindowButtons();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChatChromeColorScheme.generated.h"

USTRUCT(BlueprintType)
struct FChatChromeColorScheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChatEntryBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NoneActiveTabColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TabFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TabFontColorInverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChatBackgroundColor;
    
    LAUNCHERSOCIALTYPES_API FChatChromeColorScheme();
};


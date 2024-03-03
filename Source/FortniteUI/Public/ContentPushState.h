#pragma once
#include "CoreMinimal.h"
#include "ContentPushState.generated.h"

USTRUCT(BlueprintType)
struct FContentPushState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideChatWidget;
    
    FORTNITEUI_API FContentPushState();
};


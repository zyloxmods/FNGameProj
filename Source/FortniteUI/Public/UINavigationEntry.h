#pragma once
#include "CoreMinimal.h"
#include "UINavigateDelegateDelegate.h"
#include "UINavigationData.h"
#include "UINavigationEntry.generated.h"

USTRUCT(BlueprintType)
struct FUINavigationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINavigationData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINavigateDelegate NavigateToDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINavigateDelegate NavigateFromDelegate;
    
    FORTNITEUI_API FUINavigationEntry();
};


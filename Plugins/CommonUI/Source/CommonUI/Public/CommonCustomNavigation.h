#pragma once
#include "CoreMinimal.h"
#include "Border.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
#include "CommonCustomNavigation.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonCustomNavigation : public UBorder {
    GENERATED_BODY()
public:
	DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnCustomNavigationEvent, EUINavigation, NavigationType);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomNavigationEvent OnNavigationEvent;
    
    UCommonCustomNavigation();
};


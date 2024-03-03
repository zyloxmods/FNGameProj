#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "CommonCustomNavigation.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonCustomNavigation : public UBorder {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnCustomNavigationEvent OnNavigationEvent;
    
    UCommonCustomNavigation();
};


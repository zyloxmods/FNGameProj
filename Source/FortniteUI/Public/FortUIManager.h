#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortRootViewportLayoutInfo.h"
#include "FortUIManager.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, Within=FortUIDirector)
class FORTNITEUI_API UFortUIManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> LayoutClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyInputSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortRootViewportLayoutInfo> RootViewportLayouts;
    
public:
    UFortUIManager();
};


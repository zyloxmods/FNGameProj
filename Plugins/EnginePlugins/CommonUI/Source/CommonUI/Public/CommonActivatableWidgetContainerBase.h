#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidgetPool.h"
#include "Components/Widget.h"
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidgetContainerBase.generated.h"

class UCommonActivatableWidget;

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonActivatableWidgetContainerBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatableWidget*> WidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* DisplayedWidget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool GeneratedWidgetsPool;
    
public:
    UCommonActivatableWidgetContainerBase();
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget(UCommonActivatableWidget* WidgetToRemove);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatableWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWidgets();
    
private:
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);
    
};


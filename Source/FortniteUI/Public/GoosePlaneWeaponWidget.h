#pragma once
#include "CoreMinimal.h"
#include "GooseWeaponDisplayData.h"
#include "LTMWidgetBase.h"
#include "GoosePlaneWeaponWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGoosePlaneWeaponWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGooseWeaponDisplayData> DisplayData;
    
public:
    UGoosePlaneWeaponWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(int32 DisplayIndex, const FGooseWeaponDisplayData& InDisplayData, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
};


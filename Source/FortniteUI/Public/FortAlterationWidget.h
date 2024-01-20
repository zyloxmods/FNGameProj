#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortAlterationWidget.generated.h"

class UFortAlterationInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortAlterationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPipCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAlterationInfo* AlterationInfo;
    
public:
    UFortAlterationWidget();
    UFUNCTION(BlueprintCallable)
    void Setup(UFortAlterationInfo* InAlterationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationInfo* GetAlterationInfo() const;
    
};


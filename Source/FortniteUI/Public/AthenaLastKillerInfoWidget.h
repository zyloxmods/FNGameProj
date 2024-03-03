#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ShouldShowDeathReportDelegate.h"
#include "AthenaLastKillerInfoWidget.generated.h"

class UFortWeaponItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UAthenaLastKillerInfoWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShouldShowDeathReport ShouldShowDeathReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWait;
    
public:
    UAthenaLastKillerInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNumOfKillerKills(int32 NumOfKillers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKillerWeaponIconAndName(UTexture2D* IconTexture, const UFortWeaponItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKillerName(const FString& PlayerName, const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKillerHealthAndShield(float HealthPercent, float ShieldPercent);
    
};


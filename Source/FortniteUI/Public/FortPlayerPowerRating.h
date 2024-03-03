#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortPlayerPowerRatingType.h"
#include "FortPlayerPowerRating.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerPowerRating : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPowerRatingUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerRatingUpdated OnPowerRatingUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerPowerRatingType PowerRatingType;
    
public:
    UFortPlayerPowerRating();
    UFUNCTION(BlueprintCallable)
    void RepresentLocalPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamPowerRatingUpdated(int32 TeamPowerRating);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamMembershipChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBasePowerRatingUpdated(int32 BasePowerRating);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeamMembers() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamPowerRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasePowerRating() const;
    
};


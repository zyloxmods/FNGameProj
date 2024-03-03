#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FortHealthBarComponent.generated.h"

class ABuildingActor;
class UCurveFloat;
class UCurveLinearColor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortHealthBarComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisplayText, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsVisible, meta=(AllowPrivateAccess=true))
    bool bIsHealthBarVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleOverDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClampToScreenArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* HealthBarColorCurve;
    
public:
    UFortHealthBarComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetHealthBarWidgetVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealthBarVisibility(bool bNewVisibleState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealthBarDisplayText(FText NewDisplayText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayText();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHealthBarDisplayText() const;
    
};


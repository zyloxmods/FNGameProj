#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortCharacterAttrSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCharacterAttrSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Fortitude, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Fortitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Offense, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Offense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Tech, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Tech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Resistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxCharacterLevel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxCharacterLevel;
    
    UFortCharacterAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tech();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Resistance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Offense();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxCharacterLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fortitude();
    
};


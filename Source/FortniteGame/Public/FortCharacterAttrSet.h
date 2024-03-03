#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortCharacterAttrSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCharacterAttrSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
private:
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
    
public:
    UFortCharacterAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tech(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Resistance(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Offense(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxCharacterLevel(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fortitude(const FFortGameplayAttributeData& OldValue);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ExternalEmoteCategory.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ExternalEmote.generated.h"

class UInputComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ExternalEmote : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExternalEmotes, meta=(AllowPrivateAccess=true))
    TArray<FExternalEmoteCategory> ExternalEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UFortControllerComponent_ExternalEmote();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayEmoteAtIndex(int32 CategoryIndex, int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExternalEmotes(TArray<FExternalEmoteCategory>& PreviousExternalEmotes);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FExternalEmoteCategory> GetExternalEmotes() const;
    
};


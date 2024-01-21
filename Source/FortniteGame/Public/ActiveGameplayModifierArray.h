#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveGameplayModifier.h"
#include "ActiveGameplayModifierArray.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayModifierArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayModifier> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayModifier> DeferredGameplayModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ModifierHandleGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bSupportRuntimeModifierShutdown;
    
public:
    FORTNITEGAME_API FActiveGameplayModifierArray();
};


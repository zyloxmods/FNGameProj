#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveGameplayModifierHandle.h"
#include "ActiveGameplayModifier.generated.h"

class AFortGameplayMutator;
class UFortGameplayModifierItemDefinition;

USTRUCT(BlueprintType)
struct FActiveGameplayModifier : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGameplayModifierItemDefinition* ModifierDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayModifierHandle ModifierHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortGameplayMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Expiration;
    
    FORTNITEGAME_API FActiveGameplayModifier();
};

